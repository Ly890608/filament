/*
 * Copyright 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <camutils/Animator.h>
#include <camutils/Bookmark.h>
#include <camutils/Manipulator.h>

#include <gtest/gtest.h>

using namespace filament::math;

namespace camutils = filament::camutils;

using CamManipulator = camutils::Manipulator<float>;

class CamUtilsTest : public testing::Test {};

TEST_F(CamUtilsTest, Basic) { // NOLINT

    CamManipulator::Properties props = {
        .viewport = {256, 256},
        .zoomSpeed = 0.01,
        .homeTarget = {0, 0, 0},
        .homeUpVector = {0, 1, 0}
    };

    CamManipulator* manip = CamManipulator::create(camutils::Mode::MAP, props);

    delete manip;
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
