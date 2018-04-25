bool add(string taskname,string description,string duedate){
    if(size<100){
        mytodolist[size].description=description;
        mytodolist[size].duedate=duedate;
        mytodolist[size].taskname=taskname;
        size++;
        return true;
    }
    else{
        return false;
    }
}