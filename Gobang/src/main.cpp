#include "../include/main.h"
#include "../include/ui_load.h"
char global_project_path[MAX_PATH];

void main()
{
		init();
		init_easyx_ex();
		load_homepage();
		_getch();
		closegraph();
		end_easyx_ex();
}

void init() 
{
		char buffer[MAX_PATH];
		_getcwd(buffer, MAX_PATH);
		strncpy(global_project_path, buffer, string(buffer).find_last_of('\\'));
}

#if _MSC_VER>=1900
_ACRTIMP_ALT FILE* __cdecl __acrt_iob_func(unsigned);
#ifdef __cplusplus 
extern "C"
#endif 
FILE* __cdecl __iob_func(unsigned i) {
		return __acrt_iob_func(i);
}
#endif /* _MSC_VER>=1900 */