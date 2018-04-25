void show(){
    for(int index=1;index<size;index++){
        cout<<index<<":"<<mytodolist[index].taskname<<"  "<<mytodolist[index].duedate<<endl;
        cout<<mytodolist[index].description<<endl;
    }
}