/*Tom OLeary
Jarrod LeComte
shell.c
*/
int stringMatch(char*, char*);

int main(){
	char prompt[4];
	char buffer[512];
	char badCommand[13];
	char commandType[5];
	char commandExecute[5];

	prompt[0] = 'A';
	prompt[1] = ':';
	prompt[2] = '>';
	prompt[3] = '\0';

	commandType[0] = 't';
	commandType[1] = 'y';
	commandType[2] = 'p';
	commandType[3] = 'e';
	commandType[4] = '\0';

	commandExecute[0] = 'e';
	commandExecute[1] = 'x';
	commandExecute[2] = 'e';
	commandExecute[3] = 'c';
	commandExecute[4] = '\0';

	while (1){
		syscall(1, prompt, 0, 0);
		syscall(0, buffer, 30, 0);
	
		if (stringMatch(buffer, prompt) != 1){
			badCommand[0] = 'B';
			badCommand[1] = 'a';
			badCommand[2] = 'd';
			badCommand[3] = ' ';
			badCommand[4] = 'C';
			badCommand[5] = 'o';
			badCommand[6] = 'm';
			badCommand[7] = 'm';
			badCommand[8] = 'a';
			badCommand[9] = 'n';
			badCommand[10] = 'd';
			badCommand[11] = '!';
			badCommand[12] = '\0';
			syscall(1, badCommand, 0, 0);
		}
		if (stringMatch(buffer, commandType) == 1){
			int pointer = 0;
			char fileSize[MAX_FILE_SIZE];
			buffer[pointer] = buffer;
			syscall(0, buffer[pointer], fileSize, 0);
			syscall(1, buffer[pointer], 0, 0);
			buffer++
			pointer++;
		}
		if (stringMatch(buffer, commandExecute) == 1){
			int pointer = 0;
			buffer[pointer] = buffer;
			syscall(4, buffer[pointer], 0x2000, 0);
			buffer++;
			pointer++;
		}
	}
}

int stringMatch(char* a, char* b){
	while (1){
		if (a != b){
			return 0;
		}
	}
}
