

int array_to_num(int arrayArg[], int arraySize) {
	char str[5][2];
	int i;
	char number[5] = {'\n'};

	for(i=0;i<arraySize;i++) {
		sprintf(str[i],"%d",arrayArg[i]);
	}
	for(i=0;i<arraySize;i++) {
		strcat(number,str[i]);
	}
	i = atoi(number);
	return i;
}
	int tempReading =0;
	//assign our return concatenated integer to tempreading
	tempReading = array_to_num(tempDigits,5);
	return tempReading;
}
