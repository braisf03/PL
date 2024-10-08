%%
username {  printf("[%s]",getlogin());   }
[0-9]       {}
[A-Za-z!]   {}
.|\n        {}
end      return 0;
%%
 
/*** User code section***/
int yywrap(){

}

int main(int argc, char **argv){
 
    yylex();

    return 0;
}


