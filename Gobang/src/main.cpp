#include "../include/main.h"

extern char global_project_path[MAX_PATH];
extern int global_route;

extern Asset window;
extern Asset homePageButton[];

void main()
{
		init_easyx_ex();
		initialize();
		_getch();
		closegraph();
		end_easyx_ex();
}

void initialize()
{
		initgraph(window.width, window.height, SHOWCONSOLE);
		char buffer[MAX_PATH];
		_getcwd(buffer, MAX_PATH);
		strncpy(global_project_path, buffer, string(buffer).find_last_of('\\'));
		setRoute(HOME_PAGE);
		render_homePage();
		beginMouseListener();
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