

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Passenger { 
int pnr; 
char name[50]; 
int age; 
int train_no; 
char train_name[50]; 
struct Passenger *next; 
}; 
struct Passenger *head = NULL; 
int pnr_seed = 1001; // Auto-incrementing PNR seed 
/* Function declarations */ 
void bookTicket(); 
void cancelTicket(); 
void searchPassenger(); 
void displayBookings(); 
int main() { 
int choice; 
   
 
 
    while (1) { 
        printf("\n========================================\n"); 
        printf("       RAILWAY RESERVATION SYSTEM       \n"); 
        printf("========================================\n"); 
        printf("1. Book Ticket\n"); 
        printf("2. Cancel Ticket\n"); 
        printf("3. Search Passenger by PNR\n"); 
        printf("4. Display All Reservations\n"); 
        printf("5. Exit\n"); 
        printf("----------------------------------------\n"); 
        printf("Enter your choice (1-5): "); 
        if (scanf("%d", &choice) != 1) { 
            printf("Invalid input. Terminating.\n"); 
            break; 
        } 
 
        switch (choice) { 
            case 1: 
                bookTicket(); 
                break; 
            case 2: 
                cancelTicket(); 
                break; 
            case 3: 
                searchPassenger(); 
                break; 
            case 4: 
   
 
                displayBookings(); 
                break; 
            case 5: 
                printf("\nExiting system. Have a safe journey!\n"); 
                exit(0); 
            default: 
                printf("\nInvalid option! Please enter a valid menu item.\n"); 
        } 
    } 
 
    return 0; 
} 
 
/* Function to insert a new reservation node at the end of the list */ 
void bookTicket() { 
    struct Passenger *newNode = (struct Passenger *)malloc(sizeof(struct Passenger)); 
    if (newNode == NULL) { 
        printf("\nMemory allocation failed! System out of memory.\n"); 
        return; 
    } 
 
    newNode->pnr = pnr_seed++; 
 
    printf("\n--- Book New Ticket ---\n"); 
    printf("Generated PNR: %d\n", newNode->pnr); 
     
    printf("Enter Passenger Name: "); 
    scanf(" %[^\n]s", newNode->name); 
   
 
 
    printf("Enter Passenger Age: "); 
    scanf("%d", &newNode->age); 
 
    printf("Enter Train Number: "); 
    scanf("%d", &newNode->train_no); 
 
    printf("Enter Train Name: "); 
    scanf(" %[^\n]s", newNode->train_name); 
 
    newNode->next = NULL; 
 
    if (head == NULL) { 
        head = newNode; 
    } else { 
        struct Passenger *temp = head; 
        while (temp->next != NULL) { 
            temp = temp->next; 
        } 
        temp->next = newNode; 
    } 
 
    printf("\nTicket booked successfully! PNR: %d\n", newNode->pnr); 
} 
 
/* Function to delete a passenger node by PNR */ 
void cancelTicket() { 
    if (head == NULL) { 
   
 
        printf("\nNo bookings exist to cancel.\n"); 
        return; 
    } 
 
    int pnr; 
    printf("\nEnter PNR to cancel: "); 
    scanf("%d", &pnr); 
 
    struct Passenger *curr = head; 
    struct Passenger *prev = NULL; 
 
    /* Check if the node to delete is head */ 
    if (curr != NULL && curr->pnr == pnr) { 
        head = curr->next; 
        free(curr); 
        printf("\nReservation with PNR %d cancelled successfully.\n", pnr); 
        return; 
    } 
 
    /* Traverse to locate the node */ 
    while (curr != NULL && curr->pnr != pnr) { 
        prev = curr; 
        curr = curr->next; 
    } 
 
    if (curr == NULL) { 
        printf("\nRecord with PNR %d not found.\n", pnr); 
        return; 
   
 
    } 
 
    prev->next = curr->next; 
    free(curr); 
    printf("\nReservation with PNR %d cancelled successfully.\n", pnr); 
} 
 
/* Function to search passenger details by PNR */ 
void searchPassenger() { 
    if (head == NULL) { 
        printf("\nNo reservations recorded yet.\n"); 
        return; 
    } 
 
    int pnr; 
    printf("\nEnter PNR to search: "); 
    scanf("%d", &pnr); 
 
    struct Passenger *temp = head; 
    while (temp != NULL) { 
        if (temp->pnr == pnr) { 
            printf("\n--- Passenger Found ---\n"); 
            printf("PNR        : %d\n", temp->pnr); 
            printf("Name       : %s\n", temp->name); 
            printf("Age        : %d\n", temp->age); 
            printf("Train No   : %d\n", temp->train_no); 
            printf("Train Name : %s\n", temp->train_name); 
            return; 
   
 
        } 
        temp = temp->next; 
    } 
 
    printf("\nNo reservation found for PNR %d.\n", pnr); 
} 
 void displayBookings() { 
    if (head == NULL) { 
        printf("\nNo active reservations to display.\n"); 
        return; 
    } 
 
    struct Passenger *temp = head; 
    
printf("\n===================================================================
============\n"); 
    printf("%-8s %-20s %-6s %-10s %-20s\n", "PNR", "Name", "Age", "Train No", "Train 
Name"); 
    
printf("=====================================================================
==========\n"); 
     while (temp != NULL) { 
        printf("%-8d %-20s %-6d %-10d %-20s\n",  
               temp->pnr, temp->name, temp->age, temp->train_no, temp->train_name); 
        temp = temp->next;} 
       Printf("===================================================================
 ============\n");
 } 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
   
 
    
printf("=====================================================================
==========\n"); 
} 
