
| **Test ID** |  **Description**                                              | **Exp IN** | **Exp OUT** |
|-------------|-----|--------------------------------------------------------------|------------|-------------|
|  T_01|Provide required details for login to book a ticket| password| Successfully logined In | Successfully logined In |
|  T_02| When wrong password is entered| Password|  Entered Password is wrong | Entered Password is wrong  |
|  T_03|Display the  details of movie available|  Enter choice | Display list | Display list  |
|  T_04| Purchase a ticket for the movie available | enter choice | ThankYou for Booking Ticket | ThankYou for Booking Ticket |
|  T_05|  Summary of a ticket for purchased movie| enter choice | Booking ID,Customer name,Show Name,Hallno,Price | Booking ID,Customer name,Show Name,Hallno,Price |


| ID     |    	Description |EXP IN	                                                                          | EXP OUT | 
| :---:  |          :---:          | :---: | :---: |
| LR01   | 	User can login to the system with correct login creditials                    |	HR01 |	   |
| LR02   |	User need to book a ticket                                           |	HR01 |	   |                      
| LR03  | 	Displaying the movies                                                    	   |  HR02 |	   |
| LR04 |	Displaying the summary of the ticket booked|	HR03|	IMPLEMENTED|
