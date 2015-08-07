/**
Atomix project, ORILIB_util_i.c, TODO: insert summary here
Copyright (c) 2015 Stanford University
Released under the Apache License v2.0. See the LICENSE file for details.
Author(s): Manu Bansal
*/

#include <osl/inc/swpform.h>
#include <ti/csl/csl_gpioAux.h>

void ORILIB_gpio_output_control(
	Uint8 bank,
	Uint8 pin,
	Uint8 offOnToggle
	){

	CSL_GpioHandle gpio;
	Uint8 gpioData;

	gpio = CSL_GPIO_open(bank);
	CSL_GPIO_setPinDirOutput(gpio, pin);

	switch (offOnToggle) {
		case 0:
			CSL_GPIO_clearOutputData(gpio, pin);
		break;

		case 1:
			CSL_GPIO_setOutputData(gpio, pin);
		break;

		default:
			CSL_GPIO_getOutputData(gpio, pin, &gpioData);
			gpioData ^= 1;

			if (gpioData)
				CSL_GPIO_setOutputData(gpio, pin);
			else
				CSL_GPIO_clearOutputData(gpio, pin);
		break;
	}
}