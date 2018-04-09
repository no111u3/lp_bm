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
 * System setup and run main thread
 * @file runner.hh
 * @author Boris Vinogradov
 */

#ifndef RUNNER_HH
#define RUNNER_HH

/// Main code runner for normal state
// TODO: Need change to interface with variants for another reset states
struct runner {
    static void setup() noexcept;

    static void run() noexcept;
};

#endif // RUNNER_HH
