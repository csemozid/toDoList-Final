void deletetodo(int tasknumber){
    int index=1;
    while(tasknumber<size){
        mytodolist[tasknumber]=mytodolist[index+1];
        tasknumber++;
    }
    size--;
}