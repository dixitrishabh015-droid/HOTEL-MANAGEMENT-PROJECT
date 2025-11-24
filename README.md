# 🏨 Hotel Management System (C Project)

This is a simple hotel management system created in C. It runs in the console and helps manage basic hotel operations like adding guest details, assigning rooms, selecting meals, choosing buffet options, and handling payment methods.  
The project is built using modular programming and follows a proper folder structure as required in the major project guidelines.

---

## 📁 Project Structure

hotel-management-project/
│
├── src/ → contains all .c source files
├── include/ → header (.h) files
├── docs/ → ProjectReport.pdf
├── assets/ → optional screenshots or diagrams
│
├── README.md
└── sample_input.txt (optional)

yaml
Copy code

---

## 🔍 What the program can do

- Add guest information  
- Show all stored guest details  
- Assign rooms based on type and days of stay  
- Choose meal type (Veg / Non-Veg)  
- Select buffet option (Breakfast / Lunch / Dinner)  
- Option for room service  
- Accept payment via Cash, Card, or UPI  
- Simple menu and easy to navigate

---

## ▶️ How to Compile and Run

Use this GCC command:

```bash
gcc src/main.c src/guest.c src/room.c src/services.c -I include -o hotel
./hotel

