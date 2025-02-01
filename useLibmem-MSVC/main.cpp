#include <libmem/libmem.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	lm_module_t mod;
	lm_process_t proc;
	lm_bool_t boolk;

	boolk = LM_FindProcess("Mad Island.exe", &proc);
	if (!boolk) {
		cout << "Not Founded Mad Island Process" << endl;
		exit(1223);
	}
	else {
		LM_GetProcessEx(proc.pid, &proc);
		LM_FindModuleEx(&proc, "mono-2.0-bdwgc.dll", &mod);
		std::cout << "Mono Address: " << (void*)mod.size << std::endl;
		exit(344);
	}
	return -1;
}
