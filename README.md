#☕ Café Billing System

A terminal-based Café Billing System built in C, designed for efficient order handling, billing, and receipt generation in an institute-based café (DC Café). This system features a user-friendly interface, categorization-based discounting, and persistent user authentication.

---

## 🛠️ Features

- 👤 **Authentication System**: Sign Up and Sign In for Students and Staff.
- 📋 **User Categorization**:  
  - Students – 10% discount  
  - Staff – 20% discount  
  - Others – No discount
- 🧾 **Billing System**:
  - Menu categories: Coffee, Snacks, Beverages  
  - CGST (6%) and SGST (2%) calculation  
  - Receipt generation with date, time, and total amount  
  - Persistent billing history saved in `bill.txt`
- ⚙️ **User-Friendly Interface**:
  - Easy menu setup
  - Unique customer ID generation
  - Real-time clock and formatted bill output
- 🔐 **Security**: Password masking using asterisks during signup/login

---

## 🧩 Project Structure

- `main()` – Handles role selection (Student/Staff/Other), signup, and login
- `MenuPage()` – Displays menu, handles item selection and quantity input
- `Bill()` – Calculates total, applies taxes and discounts, generates receipt

---

## 🔄 Flow Overview

1. Role Selection →  
2. Signup/Login →  
3. Menu Display →  
4. Item Selection & Quantity Input →  
5. Bill Calculation →  
6. Receipt Generation & File Storage

---

## 📷 Sample Output

The program outputs:
- Itemized menu
- Selected orders with quantities
- Total + Tax + Discounts
- Final bill stored in `bill.txt`

---

## 📚 References

- [Goto Statement](https://youtu.be/AWUxfROdzPc)  
- [system("COLOR")](https://youtu.be/IOHhUDDZaRk)  
- [Time Function](https://www.geeksforgeeks.org/c-program-print-digital-clock-current-time/)  
- [Password Masking](https://youtu.be/xtk14TcWaN4)

---

## 🙏 Acknowledgment

This project was created as part of the **IT161 Lab** coursework to explore basic file handling, conditional logic, and user interaction in C.

> 💻 *Built with love by Team Decode Code*
