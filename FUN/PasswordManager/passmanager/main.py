from cryptography.fernet import Fernet
key = Fernet.generate_key()
with open("msf.txt", "ab") as msf:
    msf.write(key)



msb =open("msf.txt", "rb")
print(msb.read())
# message = "hello geeks"




# fernet = Fernet(key)

# encMessage = fernet.encrypt(message.encode())

# print("original string: ", message)
# print("encrypted string: ", encMessage)


# decMessage = fernet.decrypt(encMessage).decode()

# print("decrypted string: ", decMessage)
