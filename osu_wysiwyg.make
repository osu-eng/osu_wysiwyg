api = 2
core = 7.x

; WYSIWYG
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 5bf5886
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][1956778] = https://drupal.org/files/wysiwyg-ckeditor-acf-1956778-16.patch

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2.1/ckeditor_4.2.1_full.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; OSU text format
projects[osu_text_format][type] = module
projects[osu_text_format][subdir] = custom
projects[osu_text_format][download][type] = git
projects[osu_text_format][download][url] = https://github.com/osu-eng/osu_text_format.git
projects[osu_text_format][download][branch] = 7.x-1.x

; OSU image captions
projects[osu_captions][type] = module
projects[osu_captions][subdir] = custom
projects[osu_captions][download][type] = git
projects[osu_captions][download][url] = https://github.com/osu-eng/osu_captions.git
projects[osu_captions][download][branch] = 7.x-1.x

; OSU linkit profile
projects[osu_linkit][type] = module
projects[osu_linkit][subdir] = custom
projects[osu_linkit][download][type] = git
projects[osu_linkit][download][url] = https://github.com/osu-eng/osu_linkit.git
projects[osu_linkit][download][branch] = 7.x-1.x

; Token insert
projects[token_insert][version] = 2.1
projects[token_insert][subdir] = contrib