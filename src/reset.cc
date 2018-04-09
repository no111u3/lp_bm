/* Copyright 2018 Boris Vinogradov <no111u3@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Reset handler and system init checker
 * @file reset.cc
 * @author Boris Vinogradov
 */

#include <cpu.hh>
#include <init.hh>
#include <isr_base.hh>

#include "runner.hh"

/// Baremetal implementation of System reset vector
extern "C" void isr::reset() {
    // FIXME: TODO: Adding standard selector for another reset modes
    // TODO: Calling if ram may be cleaned
    lp::initer::setup_cc_env();

    runner::setup();

    runner::run();
    // After run inifinity loop with wait for interrupt code
    while (true) {
        cpu::wait_interrupt();
    }
}
