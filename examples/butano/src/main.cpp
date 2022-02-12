/*
 * Copyright (c) 2020-2022 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "bn_core.h"
#include "bn_math.h"
#include "bn_sprite_ptr.h"
#include "bn_bg_palettes.h"
#include "bn_string_view.h"
#include "bn_sprite_text_generator.h"

#include "hanamin_a_sprite_font.h"

namespace
{
    void common_font_text_scene()
    {
        bn::sprite_text_generator text_generator(hanamin_a_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -60, "English Français русский язык", text_sprites);
        text_generator.generate(0, -40, "简体中文 繁體中文（台灣）", text_sprites);
        text_generator.generate(0, -20, "繁體中文（香港）Монголхэл", text_sprites);
        text_generator.generate(0, 0, "日本語（にほんご ）", text_sprites);
        text_generator.generate(0, 20, "Tiếng Việt ภาษาไทย", text_sprites);
        text_generator.generate(0, 40, "Македонски Ўзбекча", text_sprites);
        text_generator.generate(0, 60, "☺♨➑☆★♡✂♪♫☑", text_sprites);


        bn::core::update();
    }
}

int main()
{
    bn::core::init();

    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
    common_font_text_scene();
}
