# 🔐 Whisper Lock

A beginner-level C++ project demonstrating the basic concept of **Caesar Cipher encryption and decryption**.

## 📌 About the Project

Whisper Lock is a simple educational cryptography project written in C++.

The program takes characters, applies a numeric shift key to their ASCII values, and then reverses the same operation to recover the original characters.

## ⚙️ How It Works

### Encryption

The security key is added to the character's ASCII value.

```text
Original → ASCII Value → + Security Key → Encrypted Character
M        → 77          → +9            → V
A        → 65          → +9            → J
```

### Decryption

The same security key is subtracted to recover the original characters.

```text
Encrypted → ASCII Value → - Security Key → Original
V         → 86          → -9             → M
J         → 74          → -9             → A
```

## 🛠️ Technologies Used

* C++
* iostream
* Character variables
* ASCII values
* Basic arithmetic
* Caesar Cipher concept


## ⚠️ Disclaimer

This project is created for **educational purposes**.
The Caesar Cipher is a simple classical cipher and should **not be used for real-world secure communication**.

## 🚀 Future Improvements

Planned improvements as I continue learning C++:

* Full message encryption
* User input
* Functions
* Loops
* Input validation
* Alphabet wrap-around
* Improved cipher logic

---

**Language:** C++
**Project Type:** Beginner Learning Project
