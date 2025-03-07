﻿// This file is part of Notepad++ project
// Copyright (C)2020 Don HO <don.h@free.fr>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Note that the GPL places important restrictions on "derived works", yet
// it does not provide a detailed definition of that term.  To avoid
// misunderstandings, we consider an application to constitute a
// "derivative work" for the purpose of this license if it does any of the
// following:
// 1. Integrates source code from Notepad++.
// 2. Integrates/includes/aggregates Notepad++ into a proprietary executable
//    installer, such as those produced by InstallShield.
// 3. Links to a library or executes a program that does any of the above.
// This file is part of Notepad++ project
// Copyright (C)2021 Don HO <don.h@free.fr>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.


#pragma once

#define    IDD_GLOBAL_USERDEFINE_DLG 20000
    #define    IDC_DOCK_BUTTON                              (IDD_GLOBAL_USERDEFINE_DLG + 1 )
    #define    IDC_RENAME_BUTTON                            (IDD_GLOBAL_USERDEFINE_DLG + 2 )
    #define    IDC_ADDNEW_BUTTON                            (IDD_GLOBAL_USERDEFINE_DLG + 3 )
    #define    IDC_REMOVELANG_BUTTON                        (IDD_GLOBAL_USERDEFINE_DLG + 4 )
    #define    IDC_SAVEAS_BUTTON                            (IDD_GLOBAL_USERDEFINE_DLG + 5 )
    #define    IDC_LANGNAME_COMBO                           (IDD_GLOBAL_USERDEFINE_DLG + 6 )
    #define    IDC_LANGNAME_STATIC                          (IDD_GLOBAL_USERDEFINE_DLG + 7 )
    #define    IDC_EXT_EDIT                                 (IDD_GLOBAL_USERDEFINE_DLG + 8 )
    #define    IDC_EXT_STATIC                               (IDD_GLOBAL_USERDEFINE_DLG + 9 )

    #define    IDC_UD_PERCENTAGE_SLIDER                     (IDD_GLOBAL_USERDEFINE_DLG + 10)
    #define    IDC_UD_TRANSPARENT_CHECK                     (IDD_GLOBAL_USERDEFINE_DLG + 11)
    #define    IDC_LANGNAME_IGNORECASE_CHECK                (IDD_GLOBAL_USERDEFINE_DLG + 12)
    #define    IDC_AUTOCOMPLET_EDIT                         (IDD_GLOBAL_USERDEFINE_DLG + 13)
    #define    IDC_AUTOCOMPLET_STATIC                       (IDD_GLOBAL_USERDEFINE_DLG + 14)
    #define    IDC_IMPORT_BUTTON                            (IDD_GLOBAL_USERDEFINE_DLG + 15)
    #define    IDC_EXPORT_BUTTON                            (IDD_GLOBAL_USERDEFINE_DLG + 16)

#define    IDD_FOLDER_STYLE_DLG   21000 // IDD_GLOBAL_USERDEFINE_DLG + 1000
     #define    IDC_DEFAULT                                 (IDD_FOLDER_STYLE_DLG + 100)
        #define    IDC_DEFAULT_DESCGROUP_STATIC             (IDC_DEFAULT + 1)
        #define    IDC_DEFAULT_STYLER                       (IDC_DEFAULT + 2)
        #define    IDC_WEB_HELP_LINK                        (IDC_DEFAULT + 3)
        #define    IDC_WEB_HELP_STATIC                      (IDC_DEFAULT + 4)
        #define    IDC_WEB_HELP_DESCGROUP_STATIC            (IDC_DEFAULT + 5)
        #define    IDC_FOLDER_FOLD_COMPACT                  (IDC_DEFAULT + 6)

    #define    IDC_FOLDER_IN_CODE1                          (IDD_FOLDER_STYLE_DLG + 200)
        #define IDC_FOLDER_IN_CODE1_DESCGROUP_STATIC            (IDC_FOLDER_IN_CODE1 + 20)
        #define IDC_FOLDER_IN_CODE1_OPEN_EDIT                   (IDC_FOLDER_IN_CODE1 + 21)
        #define IDC_FOLDER_IN_CODE1_MIDDLE_EDIT                 (IDC_FOLDER_IN_CODE1 + 22)
        #define IDC_FOLDER_IN_CODE1_CLOSE_EDIT                  (IDC_FOLDER_IN_CODE1 + 23)
        #define IDC_FOLDER_IN_CODE1_OPEN_STATIC                 (IDC_FOLDER_IN_CODE1 + 24)
        #define IDC_FOLDER_IN_CODE1_MIDDLE_STATIC               (IDC_FOLDER_IN_CODE1 + 25)
        #define IDC_FOLDER_IN_CODE1_CLOSE_STATIC                (IDC_FOLDER_IN_CODE1 + 26)
        #define IDC_FOLDER_IN_CODE1_STYLER                      (IDC_FOLDER_IN_CODE1 + 27)

    #define    IDC_FOLDER_IN_CODE2                          (IDD_FOLDER_STYLE_DLG + 300)
        #define IDC_FOLDER_IN_CODE2_DESCGROUP_STATIC            (IDC_FOLDER_IN_CODE2 + 20)
        #define IDC_FOLDER_IN_CODE2_OPEN_EDIT                   (IDC_FOLDER_IN_CODE2 + 21)
        #define IDC_FOLDER_IN_CODE2_MIDDLE_EDIT                 (IDC_FOLDER_IN_CODE2 + 22)
        #define IDC_FOLDER_IN_CODE2_CLOSE_EDIT                  (IDC_FOLDER_IN_CODE2 + 23)
        #define IDC_FOLDER_IN_CODE2_OPEN_STATIC                 (IDC_FOLDER_IN_CODE2 + 24)
        #define IDC_FOLDER_IN_CODE2_MIDDLE_STATIC               (IDC_FOLDER_IN_CODE2 + 25)
        #define IDC_FOLDER_IN_CODE2_CLOSE_STATIC                (IDC_FOLDER_IN_CODE2 + 26)
        #define IDC_FOLDER_IN_CODE2_STYLER                      (IDC_FOLDER_IN_CODE2 + 27)

    #define    IDC_FOLDER_IN_COMMENT                         (IDD_FOLDER_STYLE_DLG + 400)
        #define IDC_FOLDER_IN_COMMENT_DESCGROUP_STATIC          (IDC_FOLDER_IN_COMMENT + 20)
        #define IDC_FOLDER_IN_COMMENT_OPEN_EDIT                 (IDC_FOLDER_IN_COMMENT + 21)
        #define IDC_FOLDER_IN_COMMENT_MIDDLE_EDIT               (IDC_FOLDER_IN_COMMENT + 22)
        #define IDC_FOLDER_IN_COMMENT_CLOSE_EDIT                (IDC_FOLDER_IN_COMMENT + 23)
        #define IDC_FOLDER_IN_COMMENT_OPEN_STATIC               (IDC_FOLDER_IN_COMMENT + 24)
        #define IDC_FOLDER_IN_COMMENT_MIDDLE_STATIC             (IDC_FOLDER_IN_COMMENT + 25)
        #define IDC_FOLDER_IN_COMMENT_CLOSE_STATIC              (IDC_FOLDER_IN_COMMENT + 26)
        #define IDC_FOLDER_IN_COMMENT_STYLER                    (IDC_FOLDER_IN_COMMENT + 27)

#define    IDD_KEYWORD_STYLE_DLG   22000 //(IDD_GLOBAL_USERDEFINE_DLG + 2000)
    #define    IDC_KEYWORD1                                 (IDD_KEYWORD_STYLE_DLG + 100)
        #define    IDC_KEYWORD1_DESCGROUP_STATIC            (IDC_KEYWORD1 + 1 )
        #define    IDC_KEYWORD1_EDIT                        (IDC_KEYWORD1 + 20)
        #define    IDC_KEYWORD1_PREFIX_CHECK                (IDC_KEYWORD1 + 21)
        #define    IDC_KEYWORD1_STYLER                      (IDC_KEYWORD1 + 22)

    #define    IDC_KEYWORD2                                 (IDD_KEYWORD_STYLE_DLG + 200)
        #define    IDC_KEYWORD2_DESCGROUP_STATIC            (IDC_KEYWORD2 + 1 )
        #define    IDC_KEYWORD2_EDIT                        (IDC_KEYWORD2 + 20)
        #define    IDC_KEYWORD2_PREFIX_CHECK                (IDC_KEYWORD2 + 21)
        #define    IDC_KEYWORD2_STYLER                      (IDC_KEYWORD2 + 22)

    #define    IDC_KEYWORD3                                 (IDD_KEYWORD_STYLE_DLG + 300)
        #define    IDC_KEYWORD3_DESCGROUP_STATIC            (IDC_KEYWORD3 + 1 )
        #define    IDC_KEYWORD3_EDIT                        (IDC_KEYWORD3 + 20)
        #define    IDC_KEYWORD3_PREFIX_CHECK                (IDC_KEYWORD3 + 21)
        #define    IDC_KEYWORD3_STYLER                      (IDC_KEYWORD3 + 22)

    #define    IDC_KEYWORD4                                 (IDD_KEYWORD_STYLE_DLG + 400)
        #define    IDC_KEYWORD4_DESCGROUP_STATIC            (IDC_KEYWORD4 + 1 )
        #define    IDC_KEYWORD4_EDIT                        (IDC_KEYWORD4 + 20)
        #define    IDC_KEYWORD4_PREFIX_CHECK                (IDC_KEYWORD4 + 21)
        #define    IDC_KEYWORD4_STYLER                      (IDC_KEYWORD4 + 22)

    #define    IDC_KEYWORD5                                 (IDD_KEYWORD_STYLE_DLG + 450)
        #define    IDC_KEYWORD5_DESCGROUP_STATIC            (IDC_KEYWORD5 + 1 )
        #define    IDC_KEYWORD5_EDIT                        (IDC_KEYWORD5 + 20)
        #define    IDC_KEYWORD5_PREFIX_CHECK                (IDC_KEYWORD5 + 21)
        #define    IDC_KEYWORD5_STYLER                      (IDC_KEYWORD5 + 22)

    #define    IDC_KEYWORD6                                 (IDD_KEYWORD_STYLE_DLG + 500)
        #define    IDC_KEYWORD6_DESCGROUP_STATIC            (IDC_KEYWORD6 + 1 )
        #define    IDC_KEYWORD6_EDIT                        (IDC_KEYWORD6 + 20)
        #define    IDC_KEYWORD6_PREFIX_CHECK                (IDC_KEYWORD6 + 21)
        #define    IDC_KEYWORD6_STYLER                      (IDC_KEYWORD6 + 22)

    #define    IDC_KEYWORD7                                 (IDD_KEYWORD_STYLE_DLG + 550)
        #define    IDC_KEYWORD7_DESCGROUP_STATIC            (IDC_KEYWORD7 + 1 )
        #define    IDC_KEYWORD7_EDIT                        (IDC_KEYWORD7 + 20)
        #define    IDC_KEYWORD7_PREFIX_CHECK                (IDC_KEYWORD7 + 21)
        #define    IDC_KEYWORD7_STYLER                      (IDC_KEYWORD7 + 22)

    #define    IDC_KEYWORD8                                 (IDD_KEYWORD_STYLE_DLG + 600)
        #define    IDC_KEYWORD8_DESCGROUP_STATIC            (IDC_KEYWORD8 + 1 )
        #define    IDC_KEYWORD8_EDIT                        (IDC_KEYWORD8 + 20)
        #define    IDC_KEYWORD8_PREFIX_CHECK                (IDC_KEYWORD8 + 21)
        #define    IDC_KEYWORD8_STYLER                      (IDC_KEYWORD8 + 22)

#define    IDD_COMMENT_STYLE_DLG 23000 //(IDD_GLOBAL_USERDEFINE_DLG + 3000)
    #define IDC_FOLDING_OF_COMMENTS             (IDD_COMMENT_STYLE_DLG + 1)
    #define IDC_COMMENTLINE_POSITION_STATIC     (IDD_COMMENT_STYLE_DLG + 3)
    #define IDC_ALLOW_ANYWHERE                  (IDD_COMMENT_STYLE_DLG + 4)
    #define IDC_FORCE_AT_BOL                    (IDD_COMMENT_STYLE_DLG + 5)
    #define IDC_ALLOW_WHITESPACE                (IDD_COMMENT_STYLE_DLG + 6)

    #define    IDC_COMMENT                                  (IDD_COMMENT_STYLE_DLG + 100)
        #define    IDC_COMMENT_DESCGROUP_STATIC             (IDC_COMMENT + 1 )
        #define    IDC_COMMENT_OPEN_EDIT                    (IDC_COMMENT + 20)
        #define    IDC_COMMENT_CLOSE_EDIT                   (IDC_COMMENT + 21)
        #define    IDC_COMMENT_OPEN_STATIC                  (IDC_COMMENT + 22)
        #define    IDC_COMMENT_CLOSE_STATIC                 (IDC_COMMENT + 23)
        #define    IDC_COMMENT_STYLER                       (IDC_COMMENT + 24)

    #define    IDC_NUMBER                                   (IDD_COMMENT_STYLE_DLG + 200)
        #define    IDC_NUMBER_DESCGROUP_STATIC              (IDC_NUMBER + 1 )
        #define    IDC_NUMBER_STYLER                        (IDC_NUMBER + 20)
        #define    IDC_NUMBER_PREFIX1_STATIC                (IDC_NUMBER + 30)
        #define    IDC_NUMBER_PREFIX1_EDIT                  (IDC_NUMBER + 31)
        #define    IDC_NUMBER_PREFIX2_STATIC                (IDC_NUMBER + 32)
        #define    IDC_NUMBER_PREFIX2_EDIT                  (IDC_NUMBER + 33)
        #define    IDC_NUMBER_EXTRAS1_STATIC                (IDC_NUMBER + 34)
        #define    IDC_NUMBER_EXTRAS1_EDIT                  (IDC_NUMBER + 35)
        #define    IDC_NUMBER_EXTRAS2_STATIC                (IDC_NUMBER + 36)
        #define    IDC_NUMBER_EXTRAS2_EDIT                  (IDC_NUMBER + 37)
        #define    IDC_NUMBER_SUFFIX1_STATIC                (IDC_NUMBER + 38)
        #define    IDC_NUMBER_SUFFIX1_EDIT                  (IDC_NUMBER + 39)
        #define    IDC_NUMBER_SUFFIX2_STATIC                (IDC_NUMBER + 40)
        #define    IDC_NUMBER_SUFFIX2_EDIT                  (IDC_NUMBER + 41)
        #define    IDC_NUMBER_RANGE_STATIC                  (IDC_NUMBER + 42)
        #define    IDC_NUMBER_RANGE_EDIT                    (IDC_NUMBER + 43)
        #define    IDC_DECIMAL_SEPARATOR_STATIC             (IDC_NUMBER + 44)
        #define    IDC_DOT_RADIO                            (IDC_NUMBER + 45)
        #define    IDC_COMMA_RADIO                          (IDC_NUMBER + 46)
        #define    IDC_BOTH_RADIO                           (IDC_NUMBER + 47)

    #define    IDC_COMMENTLINE                              (IDD_COMMENT_STYLE_DLG + 300)
        #define    IDC_COMMENTLINE_DESCGROUP_STATIC         (IDC_COMMENTLINE + 1 )
        #define    IDC_COMMENTLINE_OPEN_EDIT                (IDC_COMMENTLINE + 20)
        #define    IDC_COMMENTLINE_CONTINUE_EDIT            (IDC_COMMENTLINE + 21)
        #define    IDC_COMMENTLINE_CLOSE_EDIT               (IDC_COMMENTLINE + 22)
        #define    IDC_COMMENTLINE_OPEN_STATIC              (IDC_COMMENTLINE + 23)
        #define    IDC_COMMENTLINE_CONTINUE_STATIC          (IDC_COMMENTLINE + 24)
        #define    IDC_COMMENTLINE_CLOSE_STATIC             (IDC_COMMENTLINE + 25)
        #define    IDC_COMMENTLINE_STYLER                   (IDC_COMMENTLINE + 26)

#define    IDD_SYMBOL_STYLE_DLG   24000   //IDD_GLOBAL_USERDEFINE_DLG + 4000
    #define    IDC_OPERATOR                             (IDD_SYMBOL_STYLE_DLG + 100)
        #define    IDC_OPERATOR_DESCGROUP_STATIC            (IDC_OPERATOR + 1 )
        #define    IDC_OPERATOR_STYLER                      (IDC_OPERATOR + 13)
        #define    IDC_OPERATOR1_EDIT                       (IDC_OPERATOR + 14)
        #define    IDC_OPERATOR2_EDIT                       (IDC_OPERATOR + 15)
        #define    IDC_OPERATOR1_STATIC                     (IDC_OPERATOR + 16)
        #define    IDC_OPERATOR2_STATIC                     (IDC_OPERATOR + 17)

    #define    IDC_DELIMITER1                               (IDD_SYMBOL_STYLE_DLG + 200)
        #define    IDC_DELIMITER1_DESCGROUP_STATIC          (IDC_DELIMITER1 + 1 )
        #define    IDC_DELIMITER1_BOUNDARYOPEN_EDIT         (IDC_DELIMITER1 + 17)
        #define    IDC_DELIMITER1_ESCAPE_EDIT               (IDC_DELIMITER1 + 18)
        #define    IDC_DELIMITER1_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER1 + 19)
        #define    IDC_DELIMITER1_BOUNDARYOPEN_STATIC       (IDC_DELIMITER1 + 20)
        #define    IDC_DELIMITER1_ESCAPE_STATIC             (IDC_DELIMITER1 + 21)
        #define    IDC_DELIMITER1_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER1 + 22)
        #define    IDC_DELIMITER1_STYLER                    (IDC_DELIMITER1 + 23)

    #define    IDC_DELIMITER2                               (IDD_SYMBOL_STYLE_DLG + 300)
        #define    IDC_DELIMITER2_DESCGROUP_STATIC          (IDC_DELIMITER2 + 1 )
        #define    IDC_DELIMITER2_BOUNDARYOPEN_EDIT         (IDC_DELIMITER2 + 17)
        #define    IDC_DELIMITER2_ESCAPE_EDIT               (IDC_DELIMITER2 + 18)
        #define    IDC_DELIMITER2_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER2 + 19)
        #define    IDC_DELIMITER2_BOUNDARYOPEN_STATIC       (IDC_DELIMITER2 + 20)
        #define    IDC_DELIMITER2_ESCAPE_STATIC             (IDC_DELIMITER2 + 21)
        #define    IDC_DELIMITER2_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER2 + 22)
        #define    IDC_DELIMITER2_STYLER                    (IDC_DELIMITER2 + 23)

    #define    IDC_DELIMITER3                               (IDD_SYMBOL_STYLE_DLG + 400)
        #define    IDC_DELIMITER3_DESCGROUP_STATIC          (IDC_DELIMITER3 + 1 )
        #define    IDC_DELIMITER3_BOUNDARYOPEN_EDIT         (IDC_DELIMITER3 + 17)
        #define    IDC_DELIMITER3_ESCAPE_EDIT               (IDC_DELIMITER3 + 18)
        #define    IDC_DELIMITER3_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER3 + 19)
        #define    IDC_DELIMITER3_BOUNDARYOPEN_STATIC       (IDC_DELIMITER3 + 20)
        #define    IDC_DELIMITER3_ESCAPE_STATIC             (IDC_DELIMITER3 + 21)
        #define    IDC_DELIMITER3_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER3 + 22)
        #define    IDC_DELIMITER3_STYLER                    (IDC_DELIMITER3 + 23)

    #define    IDC_DELIMITER4                               (IDD_SYMBOL_STYLE_DLG + 450)
        #define    IDC_DELIMITER4_DESCGROUP_STATIC          (IDC_DELIMITER4 + 1 )
        #define    IDC_DELIMITER4_BOUNDARYOPEN_EDIT         (IDC_DELIMITER4 + 17)
        #define    IDC_DELIMITER4_ESCAPE_EDIT               (IDC_DELIMITER4 + 18)
        #define    IDC_DELIMITER4_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER4 + 19)
        #define    IDC_DELIMITER4_BOUNDARYOPEN_STATIC       (IDC_DELIMITER4 + 20)
        #define    IDC_DELIMITER4_ESCAPE_STATIC             (IDC_DELIMITER4 + 21)
        #define    IDC_DELIMITER4_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER4 + 22)
        #define    IDC_DELIMITER4_STYLER                    (IDC_DELIMITER4 + 23)

    #define    IDC_DELIMITER5                               (IDD_SYMBOL_STYLE_DLG + 500)
        #define    IDC_DELIMITER5_DESCGROUP_STATIC          (IDC_DELIMITER5 + 1 )
        #define    IDC_DELIMITER5_BOUNDARYOPEN_EDIT         (IDC_DELIMITER5 + 17)
        #define    IDC_DELIMITER5_ESCAPE_EDIT               (IDC_DELIMITER5 + 18)
        #define    IDC_DELIMITER5_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER5 + 19)
        #define    IDC_DELIMITER5_BOUNDARYOPEN_STATIC       (IDC_DELIMITER5 + 20)
        #define    IDC_DELIMITER5_ESCAPE_STATIC             (IDC_DELIMITER5 + 21)
        #define    IDC_DELIMITER5_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER5 + 22)
        #define    IDC_DELIMITER5_STYLER                    (IDC_DELIMITER5 + 23)

    #define    IDC_DELIMITER6                               (IDD_SYMBOL_STYLE_DLG + 550)
        #define    IDC_DELIMITER6_DESCGROUP_STATIC          (IDC_DELIMITER6 + 1 )
        #define    IDC_DELIMITER6_BOUNDARYOPEN_EDIT         (IDC_DELIMITER6 + 17)
        #define    IDC_DELIMITER6_ESCAPE_EDIT               (IDC_DELIMITER6 + 18)
        #define    IDC_DELIMITER6_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER6 + 19)
        #define    IDC_DELIMITER6_BOUNDARYOPEN_STATIC       (IDC_DELIMITER6 + 20)
        #define    IDC_DELIMITER6_ESCAPE_STATIC             (IDC_DELIMITER6 + 21)
        #define    IDC_DELIMITER6_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER6 + 22)
        #define    IDC_DELIMITER6_STYLER                    (IDC_DELIMITER6 + 23)

    #define    IDC_DELIMITER7                               (IDD_SYMBOL_STYLE_DLG + 600)
        #define    IDC_DELIMITER7_DESCGROUP_STATIC          (IDC_DELIMITER7 + 1 )
        #define    IDC_DELIMITER7_BOUNDARYOPEN_EDIT         (IDC_DELIMITER7 + 17)
        #define    IDC_DELIMITER7_ESCAPE_EDIT               (IDC_DELIMITER7 + 18)
        #define    IDC_DELIMITER7_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER7 + 19)
        #define    IDC_DELIMITER7_BOUNDARYOPEN_STATIC       (IDC_DELIMITER7 + 20)
        #define    IDC_DELIMITER7_ESCAPE_STATIC             (IDC_DELIMITER7 + 21)
        #define    IDC_DELIMITER7_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER7 + 22)
        #define    IDC_DELIMITER7_STYLER                    (IDC_DELIMITER7 + 23)

    #define    IDC_DELIMITER8                               (IDD_SYMBOL_STYLE_DLG + 650)
        #define    IDC_DELIMITER8_DESCGROUP_STATIC          (IDC_DELIMITER8 + 1 )
        #define    IDC_DELIMITER8_BOUNDARYOPEN_EDIT         (IDC_DELIMITER8 + 17)
        #define    IDC_DELIMITER8_ESCAPE_EDIT               (IDC_DELIMITER8 + 18)
        #define    IDC_DELIMITER8_BOUNDARYCLOSE_EDIT        (IDC_DELIMITER8 + 19)
        #define    IDC_DELIMITER8_BOUNDARYOPEN_STATIC       (IDC_DELIMITER8 + 20)
        #define    IDC_DELIMITER8_ESCAPE_STATIC             (IDC_DELIMITER8 + 21)
        #define    IDC_DELIMITER8_BOUNDARYCLOSE_STATIC      (IDC_DELIMITER8 + 22)
        #define    IDC_DELIMITER8_STYLER                    (IDC_DELIMITER8 + 23)

#define    IDD_STYLER_POPUP_DLG   25000   //IDD_GLOBAL_USERDEFINE_DLG + 5000
    #define IDC_STYLER_CHECK_BOLD                           (IDD_STYLER_POPUP_DLG + 1 )
    #define IDC_STYLER_CHECK_ITALIC                         (IDD_STYLER_POPUP_DLG + 2 )
    #define IDC_STYLER_CHECK_UNDERLINE                      (IDD_STYLER_POPUP_DLG + 3 )
    #define IDC_STYLER_COMBO_FONT_NAME                      (IDD_STYLER_POPUP_DLG + 4 )
    #define IDC_STYLER_COMBO_FONT_SIZE                      (IDD_STYLER_POPUP_DLG + 5 )
    #define IDC_STYLER_FG_STATIC                            (IDD_STYLER_POPUP_DLG + 6 )
    #define IDC_STYLER_BG_STATIC                            (IDD_STYLER_POPUP_DLG + 7 )
    #define IDC_STYLER_CHECK_NESTING_DELIMITER1             (IDD_STYLER_POPUP_DLG + 8 )
    #define IDC_STYLER_CHECK_NESTING_DELIMITER2             (IDD_STYLER_POPUP_DLG + 9 )
    #define IDC_STYLER_CHECK_NESTING_DELIMITER3             (IDD_STYLER_POPUP_DLG + 10)
    #define IDC_STYLER_CHECK_NESTING_DELIMITER4             (IDD_STYLER_POPUP_DLG + 11)
    #define IDC_STYLER_CHECK_NESTING_DELIMITER5             (IDD_STYLER_POPUP_DLG + 12)
    #define IDC_STYLER_CHECK_NESTING_DELIMITER6             (IDD_STYLER_POPUP_DLG + 13)
    #define IDC_STYLER_CHECK_NESTING_DELIMITER7             (IDD_STYLER_POPUP_DLG + 14)
    #define IDC_STYLER_CHECK_NESTING_DELIMITER8             (IDD_STYLER_POPUP_DLG + 15)
    #define IDC_STYLER_CHECK_NESTING_COMMENT                (IDD_STYLER_POPUP_DLG + 16)
    #define IDC_STYLER_CHECK_NESTING_COMMENT_LINE           (IDD_STYLER_POPUP_DLG + 17)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD1               (IDD_STYLER_POPUP_DLG + 18)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD2               (IDD_STYLER_POPUP_DLG + 19)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD3               (IDD_STYLER_POPUP_DLG + 20)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD4               (IDD_STYLER_POPUP_DLG + 21)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD5               (IDD_STYLER_POPUP_DLG + 22)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD6               (IDD_STYLER_POPUP_DLG + 23)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD7               (IDD_STYLER_POPUP_DLG + 24)
    #define IDC_STYLER_CHECK_NESTING_KEYWORD8               (IDD_STYLER_POPUP_DLG + 25)
    #define IDC_STYLER_CHECK_NESTING_OPERATORS1             (IDD_STYLER_POPUP_DLG + 26)
    #define IDC_STYLER_CHECK_NESTING_OPERATORS2             (IDD_STYLER_POPUP_DLG + 27)
    #define IDC_STYLER_CHECK_NESTING_NUMBERS                (IDD_STYLER_POPUP_DLG + 28)
    #define IDC_STYLER_STATIC_NESTING_GROUP                 (IDD_STYLER_POPUP_DLG + 29)
    #define IDC_STYLER_STATIC_FONT_OPTIONS                  (IDD_STYLER_POPUP_DLG + 30)
    #define IDC_STYLER_NAME_STATIC                          (IDD_STYLER_POPUP_DLG + 31)
    #define IDC_STYLER_SIZE_STATIC                          (IDD_STYLER_POPUP_DLG + 32)
    #define IDC_STYLER_CHECK_FG_TRANSPARENT                 (IDD_STYLER_POPUP_DLG + 33)
    #define IDC_STYLER_CHECK_BG_TRANSPARENT                 (IDD_STYLER_POPUP_DLG + 34)

#define    IDD_STRING_DLG   26000   //IDD_GLOBAL_USERDEFINE_DLG + 6000
    #define    IDC_STRING_STATIC                            (IDD_STRING_DLG + 1)
    #define    IDC_STRING_EDIT                              (IDD_STRING_DLG + 2)
