/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

//! \file
//! \brief Hello-World theCore demo.
//! \details Example shows how to use simple console output within theCore.

// For gpio_init_generated() routine
#include <ecl/core_generated.hpp>

// For ecl::cout
#include <ecl/iostream.hpp>

// For wait_for() routine
#include <common/execution.hpp>

//! Board initialization routine.
//! \details The first user-defined this that will be called after reset.
//! No static or global object is constructed at this particular moment.
//! Usually this routine should perform basic GPIO initialization.
extern "C"
void board_init()
{
    gpio_init_generated();
}

//! Main routine.
int main()
{
    ecl::cout << "Hello World!" << ecl::endl << ecl::endl;

    ecl::cout << "Starting delay demonstration..." << ecl::endl << ecl::endl;

    ecl::cout << "[--] Waiting for 2 seconds" << ecl::endl;
    ecl::wait_for(2000);
    ecl::cout << "[--] Done waiting 2 seconds" << ecl::endl << ecl::endl;

    ecl::cout << "[----] Waiting for 4 seconds" << ecl::endl;
    ecl::wait_for(4000);
    ecl::cout << "[----] Done waiting 4 seconds" << ecl::endl << ecl::endl;

    ecl::cout << "[--------] Waiting for 8 seconds" << ecl::endl;
    ecl::wait_for(8000);
    ecl::cout << "[--------] Done waiting 8 seconds" << ecl::endl << ecl::endl;

    /* Application will abort */
    return 0;
}
