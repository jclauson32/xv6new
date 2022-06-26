#include "types.h"
#include "user.h"

int main(int argc, char* argv[]){
int pid = getpid();
int num_calls = atoi(argv[1]);
int num_good_calls = atoi(argv[2]);


 
for(int i = 0; i < num_good_calls - 1; i++){
getpid();
}

for(int i = 0; i < num_calls - num_good_calls; i++){
kill(-1);
}

int calls_found = getnumsyscalls(pid);
int good_calls_found = getnumsyscallsgood(pid);
printf(1,"%d %d\n", calls_found, good_calls_found);
exit();
}
