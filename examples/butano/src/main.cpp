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

#include "common_sc_variable_16x16_sprite_font.h"
#include "common_tc_variable_16x16_sprite_font.h"
#include "common_hc_variable_16x16_sprite_font.h"
#include "common_jp_variable_16x16_sprite_font.h"
#include "common_kr_variable_16x16_sprite_font.h"

namespace
{
    void common_font_text_scene()
    {
        bn::sprite_text_generator common_sc_font_text_generator(common_sc_variable_16x16_sprite_font);
        common_sc_font_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> common_sc_font_text_sprites;
        common_sc_font_text_generator.generate(0, -60, "English", common_sc_font_text_sprites);
        common_sc_font_text_generator.generate(0, -40, "简体中文（3500个常用汉字）", common_sc_font_text_sprites);

        bn::sprite_text_generator common_tc_font_text_generator(common_tc_variable_16x16_sprite_font);
        common_tc_font_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> common_tc_font_text_sprites;
        common_tc_font_text_generator.generate(0, -20, "繁體中文（台灣）4808個常用國字", common_tc_font_text_sprites);
        common_tc_font_text_generator.generate(0, 0, "+ 6341個次常用國字", common_tc_font_text_sprites);

        bn::sprite_text_generator common_hc_font_text_generator(common_hc_variable_16x16_sprite_font);
        common_hc_font_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> common_hc_font_text_sprites;
        common_hc_font_text_generator.generate(0, 20, "繁體中文（香港）小學學習4807字", common_hc_font_text_sprites);

        bn::sprite_text_generator common_jp_font_text_generator(common_jp_variable_16x16_sprite_font);
        common_jp_font_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> common_jp_font_text_sprites;
        common_jp_font_text_generator.generate(0, 40, "日本語「常用漢字1945字」", common_jp_font_text_sprites);

        bn::sprite_text_generator common_kr_font_text_generator(common_kr_variable_16x16_sprite_font);
        common_kr_font_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> common_kr_font_text_sprites;
        common_kr_font_text_generator.generate(0, 60, "한국어 2350한자", common_kr_font_text_sprites);

        bn::core::update();
    }
}

int main()
{
    bn::core::init();

    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
    common_font_text_scene();
}
