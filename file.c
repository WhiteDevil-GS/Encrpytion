#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
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
        
        encf_name = fopen(flna,"r");
        char final[] = "Decrypted_";

        strcat(final,flna);
        enccptedf_name = fopen(final,"w");
        
        if(encf_name==NULL){
            printf("File Empty Nothing To Decrypt\n");
        }
        else{
            
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
