int calcMode(int score[], int shotNumber)
{
    int howMany[11]={0}, maximum = 0, maximumIndex = 0;

    for(int i=0; i<shotNumber; i++) howMany[score[i]]++;

    for(int i=0; i<11; i++){
        if(howMany[i] > maximum){
            maximum = howMany[i];
            maximumIndex = i;
        }
    }

    return maximumIndex;
}
