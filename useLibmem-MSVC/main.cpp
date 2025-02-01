#include <libmem/libmem.h>
#include <Windows.h>
#include <stdio.h>

int main()
{
	lm_module_t mod;
	lm_process_t proc;
	lm_bool_t boolk;

	boolk = LM_FindProcess("Mad Island.exe", &proc);
	if (!boolk) {
		exit(1223);
	}
	else {
		LM_FindModule("mono-2.0-bdwgc.dll", &mod);
		exit(344);
	}
	return -1;
}