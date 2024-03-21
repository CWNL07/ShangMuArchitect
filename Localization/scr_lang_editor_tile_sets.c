//Linked exclusively to the tile set tab on the editor
switch(use_tileset_preview_set_increment)
    {
        case 0:
            {
                //use_tileset_preview_set = ui_tileset_temple;
                scr_set_temple_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_temple_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_temple_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_temple_es_es();
                if parent.user_language_mode = 4
                    scr_lang_temple_de_de();
                break;
            }
        case 1:
            {
                //use_tileset_preview_set = ui_tileset_city;
                scr_set_city_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_city_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_city_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_city_es_es();
                if parent.user_language_mode = 4
                    scr_lang_city_de_de();
                break;
            }
        case 2:
            {
                //use_tileset_preview_set = ui_tileset_city_2;
                scr_set_city_extended_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_sewers_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_sewers_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_sewers_es_es();
                if parent.user_language_mode = 4
                    scr_lang_sewers_de_de();
                break;
            }
        case 3:
            {
                //use_tileset_preview_set = ui_tileset_ravine;
                scr_set_mountain_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_mountain_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_mountain_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_mountain_es_es();
                if parent.user_language_mode = 4
                    scr_lang_mountain_de_de();
                break;
            }
        case 4:
            {
                //use_tileset_preview_set = ui_tileset_lagoon;
                scr_set_lagoon_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_lagoon_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_lagoon_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_lagoon_es_es();
                if parent.user_language_mode = 4
                    scr_lang_lagoon_de_de();
                break;
            }
        case 5:
            {
                //use_tileset_preview_set = ui_tileset_platform;
                scr_set_platforms_definition_table();
                if parent.user_language_mode = 1
                    scr_lang_platforms_br_pt();
                if parent.user_language_mode = 2
                    scr_lang_platforms_pl_pl();
                if parent.user_language_mode = 3
                    scr_lang_platforms_es_es();
                if parent.user_language_mode = 4
                    scr_lang_platforms_de_de();
                break;
            }
    }
