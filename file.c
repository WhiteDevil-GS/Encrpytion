#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("
\ \      / / | | |_ _|_   _| ____|    |  _ \  _____   _(_) |      / ___/ ___|
 \ \ /\ / /| |_| || |  | | |  _| _____| | | |/ _ \ \ / / | |_____| |  _\___ \
  \ V  V / |  _  || |  | | | |__|_____| |_| |  __/\ V /| | |_____| |_| |___) |
   \_/\_/  |_| |_|___| |_| |_____|    |____/ \___| \_/ |_|_|      \____|____/


 _____                             _   _
| ____|_ __   ___ _ __ _   _ _ __ | |_(_) ___  _ __
|  _| | '_ \ / __| '__| | | | '_ \| __| |/ _ \| '_ \
| |___| | | | (__| |  | |_| | |_) | |_| | (_) | | | |
|_____|_| |_|\___|_|   \__, | .__/ \__|_|\___/|_| |_|
                       |___/|_|
");
    char flna[40];
    int ch;
    printf("Select Your Choice\n");
    printf("[01]->Encryption\n");
    printf("[02]->Decryption\n\n\n\n");

    printf("Select---->");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter the file name with extention For Encryption\n");
        scanf("%s",flna);

        FILE *encf_name,*enccptedf_name;
        
        encf_name = fopen(flna,"r");
        char final[] = "Encrypted_";

        strcat(final,flna);
        enccptedf_name = fopen(final,"w");
        
        if(encf_name==NULL){
            printf("File Empty Nothing To Encrypt\n");
        }
        else{
            
            char ch = fgetc(encf_name);
            while (ch!=EOF)
            {
                fputc(ch-30,enccptedf_name);
                ch = fgetc(encf_name);
            }
            
            for(int i=1; i<=90; i++){
                printf("Progress>>");
                for(int j=1; j<=i; j++){
                    printf("#");
                }
                printf("\n");
            }
            printf("\nSucessfull\n");
            fclose(enccptedf_name);
            fclose(encf_name);
        }

    }
    if(ch==2){
        printf("Enter the file name with extention For Decryption\n");
        scanf("%s",flna);

        FILE *encf_name,*enccptedf_name;
        
        
        char final[] = "Decrypted_";

        strcat(final,flna);
        enccptedf_name = fopen(final,"w");
        
        if(encf_name==NULL){
            printf("File Empty Nothing To Decrypt\n");
        }
        else{
            encf_name = fopen(flna,"r");
            
            char ch = fgetc(encf_name);
            while (ch!=EOF)
            {
                fputc(ch+30,enccptedf_name);
                ch = fgetc(encf_name);
            }
            
            for(int i=1; i<=90; i++){
                printf("Progress>>");
                for(int j=1; j<=i; j++){
                    printf("#");
                }
                printf("\n");
            }
            printf("\nSucessfull\n");
            fclose(enccptedf_name);
            fclose(encf_name);
        }
    }
    if(ch>2 || ch<1){
        printf("\nInavlid Choice!!!!!!!\n");
    }
}
