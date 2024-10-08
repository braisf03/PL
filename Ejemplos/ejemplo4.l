%%
(.|\n)? {printf(""); }

"/*""/"*([^*/]|[^*]"/"|"*"[^/])*"*"*"*/" {printf("[comment]%s\n", yytext);} 
%%


int main(){

    yylex();

    return 0;
}