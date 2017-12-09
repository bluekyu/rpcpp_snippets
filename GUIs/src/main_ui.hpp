/**
 * MIT License
 *
 * Copyright (c) 2016-2017 Center of Human-centered Interaction for Coexistence
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <render_pipeline/rppanda/gui/onscreen_text.hpp>

namespace rppanda {
class DirectButton;
class DirectSlider;
class DirectCheckBox;
}

namespace rpcore {
class RenderPipeline;
}

class MainUI
{
public:
    MainUI(rpcore::RenderPipeline& pipeline);
    ~MainUI();

    bool is_hidden() const;

    void show();
    void hide();

protected:
    void button_on_clicked();
    void slider_on_changed();
    void checkbox_on_clicked(bool status);

private:
    rpcore::RenderPipeline& pipeline_;

    NodePath ui_root_;

    PT(rppanda::DirectButton) button_;
    PT(rppanda::DirectSlider) slider_;
    PT(rppanda::DirectCheckBox) checkbox_;
    rppanda::OnscreenText button_text_;
    rppanda::OnscreenText checkbox_text_;
};
