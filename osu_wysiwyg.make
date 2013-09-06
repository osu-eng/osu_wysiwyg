; CKEditor
projects[ckeditor][subdir] = contrib
projects[ckeditor][version] = 1.13

libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2/ckeditor_4.2_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; OSU text format
projects[osu_text_format][type] = module
projects[osu_text_format][subdir] = osu
projects[osu_text_format][download][type] = git
projects[osu_text_format][download][url] = https://github.com/osu-eng/osu_text_format.git
projects[osu_text_format][download][branch] = master