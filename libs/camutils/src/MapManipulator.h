/*
 * Copyright (C) 2019 The Android Open Source Project
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

#ifndef CAMUTILS_MAP_MANIPULATOR_H
#define CAMUTILS_MAP_MANIPULATOR_H

#include <camutils/Manipulator.h>

namespace filament {
namespace camutils {

template<typename FLOAT>
class MapManipulator : public Manipulator<FLOAT> {
public:
    using Bookmark = Bookmark<FLOAT>;
    using Properties = typename Manipulator<FLOAT>::Properties;

    MapManipulator(Mode mode, const Properties& props) : Manipulator<FLOAT>(mode, props) {}

    void grabBegin(int winx, int winy, bool strafe) override {

    }

    void grabUpdate(int winx, int winy) override {

    }

    void grabEnd() override {

    }

    void zoom(int winx, int winy, FLOAT scrolldelta) override {

    }

    Bookmark getCurrentBookmark() const override {
        Bookmark bookmark;
        return bookmark;
    }

    Bookmark getHomeBookmark() const override {
        Bookmark bookmark;
        return bookmark;
    }

    void jumpToBookmark(const Bookmark& bookmark) override {

    }
};

} // namespace camutils
} // namespace filament

#endif /* CAMUTILS_MAP_MANIPULATOR_H */
