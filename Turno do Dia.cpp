void menu()
{
    cout<<"Que Período do Dia Está?:\n";
    cout<<"1.Manhã\n";
    cout<<"2.Tarde\n";
    cout<<"3.Noite\n";
}
void boas_vindas()
{
    int op;
    cint>>op;

    if(op==1)
        cout<<"Bom Dia!\n";
    else if(op==2)
        cout<<"Boa Tarde!\n";
    else if (op==3)
        cout<<"Boa Noite!\n";
    else
        cout<<"Entrada Inválida\n";
}
int main()
{
    menu();
    boas_vindas();
    cout<<"Encerrando...\n"
return 0;
}
}