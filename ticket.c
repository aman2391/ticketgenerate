#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TICKET_NUMBER 9999

// Function to generate a random ticket number
int generateTicketNumber() {
    return rand() % MAX_TICKET_NUMBER + 1;
}

// Function to generate a random ticket code
void generateTicketCode(char *code, int length) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (int i = 0; i < length; i++) {
        code[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    code[length] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int numTickets;
    printf("enter your choice :\n1.Bus\n2.Aeroplane\n3.Train\n");
    scanf("%i", &numTickets);
        printf("******* your choice Bus*******");
        printf("Enter your destination:");
        scanf("%i", &numTickets);
    if(numTickets==1){
        printf("Enter the number of tickets to generate: ");
           scanf("%d", &numTickets);
     
         printf("\nGenerating %d tickets:\n", numTickets);

             for (int i = 0; i < numTickets; i++) {
                int ticketNumber = generateTicketNumber();
                   char ticketCode[6]; // Assuming a ticket code of length 5
                    generateTicketCode(ticketCode, 5);
                 printf("Ticket %d: %04d-%s\n", i + 1, ticketNumber, ticketCode);
    }
    }

        else if(numTickets==2){
              printf("Enter the number of tickets to generate: ");
                 scanf("%d", &numTickets);

              printf("\nGenerating %d tickets:\n", numTickets);

                  for (int i = 0; i < numTickets; i++) {
                    int ticketNumber = generateTicketNumber();
                      char ticketCode[6]; // Assuming a ticket code of length 5
                        generateTicketCode(ticketCode, 5);
               printf("Ticket %d: %04d-%s\n", i + 1, ticketNumber, ticketCode);
    }
    }
        else if(numTickets==3)
    {
             printf("Enter the number of tickets to generate: ");
                 scanf("%d", &numTickets);

            printf("\nGenerating %d tickets:\n", numTickets);

               for (int i = 0; i < numTickets; i++) {
                  int ticketNumber = generateTicketNumber();
                      char ticketCode[6]; // Assuming a ticket code of length 5
                         generateTicketCode(ticketCode, 5);
            printf("Ticket %d: %04d-%s\n", i + 1, ticketNumber, ticketCode);
    }
    }
     
    return 0;
}