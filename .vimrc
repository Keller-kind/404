call plug#begin ()

Plug 'itchyny/lightline.vim'

Plug 'bfrg/vim-cpp-modern'

Plug 'codota/TabNine'

Plug 'frazrepo/vim-rainbow'

Plug 'tibabit/vim-templates'

Plug 'tpope/vim-pathogen'

let g:rainbow_guifgs = ['lightblue', 'lightgreen', 'yellow', 'red', 'magenta']
let g:ctermfgs = ['lightblue', 'lightgreen', 'yellow', 'red', 'magenta']


nnoremap ö <esc>         " Remap in Normal mode
inoremap ö <esc>         " Remap in Insert and Replace mode
vnoremap ö <esc>         " Remap in Visual and Select mode
xnoremap ö <esc>         " Remap in Visual mode
snoremap ö <esc>         " Remap in Select mode
cnoremap ö <C-C>         " Remap in Command-line mode
onoremap ö <esc>         " Remap in Operator pending mode
let g:rainbow_active = 1
let g:cpp_function_highlight = 1
let g:cpp_attributes_highlight = 1
let g:cpp_member_highlights = 1
let g:cpp_simple_highlights = 1
let g:tmpl_author_email = 'leopold.keller@stud.h-da.de'
let g:tmpl_author_name = 'Leopold Keller'
set laststatus=2
set tabstop=4
syntax enable
set background=dark



call plug#end ()
