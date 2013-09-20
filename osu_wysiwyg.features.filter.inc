<?php
/**
 * @file
 * osu_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function osu_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: CKEDITOR WYSIWYG.
  $formats['osu_wysiwyg_text_format'] = array(
    'format' => 'osu_wysiwyg_text_format',
    'name' => 'CKEDITOR WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'wysiwyg' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'a[accesskey|charset|class|coords|dir<ltr?rtl|href|hreflang|id|lang|name|rel|rev|shape<circle?default?poly?rect|style|tabindex|title|target|type],
abbr[class|dir<ltr?rtl|id|lang|style|title],
acronym[class|dir<ltr?rtl|id|id|lang|style|title],
address[class|align|dir<ltr?rtl|id|lang|style|title],
article[class|dir<ltr?rtl|id|lang|style|title],
aside[class|dir<ltr?rtl|id|lang|style|title],
audio[autoplay|class|controls|dir<ltr?rtl|id|lang|loop|preload|src|style|title],
bdo[class|dir<ltr?rtl|id|lang|style|title],
big[class|dir<ltr?rtl|id|lang|style|title],
blockquote[dir|style|cite|class|dir<ltr?rtl|id|lang|style|title],
br[class|clear<all?left?none?right|id|style|title],
canvas[class|dir<ltr?rtl|height|id|lang|style|title|width],
caption[align<bottom?left?right?top|class|dir<ltr?rtl|id|lang|style|title],
center[class|dir<ltr?rtl|id|lang|style|title],
cite[class|dir<ltr?rtl|id|lang|style|title],
code[class|dir<ltr?rtl|id|lang|style|title],
col[align<center?char?justify?left?right|char|charoff|class|dir<ltr?rtl|id|lang|span|style|title|valign<baseline?bottom?middle?top|width],
colgroup[align<center?char?justify?left?right|char|charoff|class|dir<ltr?rtl|id|lang|span|style|title|valign<baseline?bottom?middle?top|width],
command[class|dir<ltr?rtl|disabled|icon|id|label|lang|style|title|type],
datalist[class|dir<ltr?rtl|id|lang|style|title],
dd[class|dir<ltr?rtl|id|lang|style|title],
del[cite|class|datetime|dir<ltr?rtl|id|lang|style|title],
details[class|dir<ltr?rtl|id|lang|open|style|title],
dfn[class|dir<ltr?rtl|id|lang|style|title],
dir[class|compact<compact|dir<ltr?rtl|id|lang|style|title],
div[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
dl[class|compact<compact|dir<ltr?rtl|id|lang|style|title],
dt[class|dir<ltr?rtl|id|lang|style|title],
em/i[class|dir<ltr?rtl|id|lang|style|title],
fieldset[class|dir<ltr?rtl|id|lang|style|title],
figcaption[class|dir<ltr?rtl|id|lang|style|title],
figure[class|dir<ltr?rtl|id|lang|style|title],
footer[class|dir<ltr?rtl|id|lang|style|title],
font[class|color|dir<ltr?rtl|face|id|lang|size|style|title],
h1[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
h2[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
h3[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
h4[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
h5[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
h6[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
header[class|dir<ltr?rtl|id|lang|style|title],
hgroup[class|dir<ltr?rtl|id|lang|style|title],
hr[align<center?left?right|class|dir<ltr?rtl|id|lang|noshade<noshade|size|style|title|width],
img[align<bottom?left?middle?right?top|alt|border|class|dir<ltr?rtl|height|hspace|id|ismap<ismap|lang|longdesc|name|src|style|title|usemap|vspace|width],
ins[cite|class|datetime|dir<ltr?rtl|id|lang|style|title],
kbd[class|dir<ltr?rtl|id|lang|style|title],
keygen[autofocus|challenge|class|dir<ltr?rtl|disabled<disabled|form|id|keytype|lang|style|title],
legend[align<bottom?left?right?top|accesskey|class|dir<ltr?rtl|id|lang|style|title],
li[class|dir<ltr?rtl|id|lang|style|title|type|value],
mark[class|dir<ltr?rtl|id|lang|style|title],
menu[class|compact<compact|dir<ltr?rtl|id|label|lang|style|title|type],
meter[class|dir<ltr?rtl|high|id|lang|low|max|min|optimum|style|title|value],
nav[class|dir<ltr?rtl|id|lang|style|title],
ol[class|compact<compact|dir<ltr?rtl|id|lang|start|style|title|type],
output[class|dir<ltr?rtl|for|form|id|lang|name|style|title],
p[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
pre/listing/plaintext/xmp[align|class|dir<ltr?rtl|id|lang|style|title|width],
progress[class|dir<ltr?rtl|id|lang|max|style|title|value],
q[cite|class|dir<ltr?rtl|id|lang|style|title],
rp[class|dir<ltr?rtl|id|lang|style|title],
rt[class|dir<ltr?rtl|id|lang|style|title],
ruby[class|dir<ltr?rtl|id|lang|style|title],
s[class|dir<ltr?rtl|id|lang|style|title],
samp[class|dir<ltr?rtl|id|lang|style|title],
section[class|dir<ltr?rtl|id|lang|style|title],
small[class|dir<ltr?rtl|id|lang|media|style|title],
source[class|dir<ltr?rtl|id|lang|src|style|title|type],
span[align<center?justify?left?right|class|dir<ltr?rtl|id|lang|style|title],
strike[class|class|dir<ltr?rtl|id|lang|style|title],
strong/b[class|dir<ltr?rtl|id|lang|style|title],
sub[class|dir<ltr?rtl|id|lang|style|title],
summary[class|dir<ltr?rtl|id|lang|open|style|title],
sup[class|dir<ltr?rtl|id|lang|style|title],
table[align<center?left?right|bgcolor|border|cellpadding|cellspacing|class|dir<ltr?rtl|frame|height|id|lang|rules|style|summary|title|width],
tbody[align<center?char?justify?left?right|char|class|charoff|dir<ltr?rtl|id|lang|style|title|valign<baseline?bottom?middle?top],
td[abbr|align<center?char?justify?left?right|axis|bgcolor|char|charoff|class|colspan|dir<ltr?rtl|headers|height|id|lang|nowrap<nowrap|rowspan|scope<col?colgroup?row?rowgroup|style|title|valign<baseline?bottom?middle?top|width],
tfoot[align<center?char?justify?left?right|char|charoff|class|dir<ltr?rtl|id|lang|style|title|valign<baseline?bottom?middle?top],
th[abbr|align<center?char?justify?left?right|axis|bgcolor|char|charoff|class|colspan|dir<ltr?rtl|headers|height|id|lang|nowrap<nowrap|rowspan|scope<col?colgroup?row?rowgroup|style|title|valign<baseline?bottom?middle?top|width],
thead[align<center?char?justify?left?right|char|charoff|class|dir<ltr?rtl|id|lang|style|title|valign<baseline?bottom?middle?top],
time[class|datetime|dir<ltr?rtl|id|lang|pubdate|style|title],
tr[abbr|align<center?char?justify?left?right|bgcolor|char|charoff|class|rowspan|dir<ltr?rtl|id|lang|style|title|valign<baseline?bottom?middle?top],
track[class|dir<ltr?rtl|data-type|id|kind|lang|src|style|title|type],
tt[class|dir<ltr?rtl|id|lang|style|title],
u[class|dir<ltr?rtl|id|lang|style|title],
ul[class|compact<compact|dir<ltr?rtl|id|lang|style|title|type],
var[class|dir<ltr?rtl|height|id|lang|style],
video[autoplay|class|controls|dir<ltr?rtl|id|lang|loop|preload|poster|src|style|title|height|width],
wbr[class|dir<ltr?rtl|id|lang|style|title]',
          'allow_comments' => 1,
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 'color',
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'padding-right' => 'padding-right',
            'padding-left' => 'padding-left',
            'margin' => 0,
            'margin-top' => 0,
            'margin-right' => 0,
            'margin-bottom' => 0,
            'margin-left' => 0,
            'padding' => 0,
            'padding-top' => 0,
            'padding-bottom' => 0,
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'float' => 'float',
            'clear' => 0,
            'display' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'a*',
            2 => 'b*',
            4 => 'c*',
            6 => 'd*',
            8 => 'e*',
            10 => 'f*',
            12 => 'g*',
            14 => 'h*',
            16 => 'i*',
            18 => 'j*',
            20 => 'k*',
            22 => 'l*',
            24 => 'm*',
            26 => 'n*',
            28 => 'o*',
            30 => 'p*',
            32 => 'q*',
            34 => 'r*',
            36 => 's*',
            38 => 't*',
            40 => 'u*',
            42 => 'v*',
            44 => 'w*',
            46 => 'x*',
            48 => 'y*',
            50 => 'z*',
            52 => 'A*',
            54 => 'B*',
            56 => 'C*',
            58 => 'D*',
            60 => 'E*',
            62 => 'F*',
            64 => 'G*',
            66 => 'H*',
            68 => 'I*',
            70 => 'J*',
            72 => 'K*',
            74 => 'L*',
            76 => 'M*',
            78 => 'N*',
            80 => 'O*',
            82 => 'P*',
            84 => 'Q*',
            86 => 'R*',
            88 => 'S*',
            90 => 'T*',
            92 => 'U*',
            94 => 'V*',
            96 => 'W*',
            98 => 'X*',
            100 => 'Y*',
            102 => 'Z*',
          ),
          'rule_valid_ids' => array(
            0 => 'a*',
            2 => 'b*',
            4 => 'c*',
            6 => 'd*',
            8 => 'e*',
            10 => 'f*',
            12 => 'g*',
            14 => 'h*',
            16 => 'i*',
            18 => 'j*',
            20 => 'k*',
            22 => 'l*',
            24 => 'm*',
            26 => 'n*',
            28 => 'o*',
            30 => 'p*',
            32 => 'q*',
            34 => 'r*',
            36 => 's*',
            38 => 't*',
            40 => 'u*',
            42 => 'v*',
            44 => 'w*',
            46 => 'x*',
            48 => 'y*',
            50 => 'z*',
            52 => 'A*',
            54 => 'B*',
            56 => 'C*',
            58 => 'D*',
            60 => 'E*',
            62 => 'F*',
            64 => 'G*',
            66 => 'H*',
            68 => 'I*',
            70 => 'J*',
            72 => 'K*',
            74 => 'L*',
            76 => 'M*',
            78 => 'N*',
            80 => 'O*',
            82 => 'P*',
            84 => 'Q*',
            86 => 'R*',
            88 => 'S*',
            90 => 'T*',
            92 => 'U*',
            94 => 'V*',
            96 => 'W*',
            98 => 'X*',
            100 => 'Y*',
            102 => 'Z*',
          ),
          'rule_style_urls' => array(),
        ),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}