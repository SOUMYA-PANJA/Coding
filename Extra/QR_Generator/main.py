import qrcode

def generate_qrcode(data, filename):
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_L,
        box_size=10,
        border=4,
    )
    qr.add_data(data)
    qr.make(fit=True)

    img = qr.make_image(fill_color="black", back_color="white")

    img.save(filename)

if __name__ == "__main__":
    data_to_encode = input("Enter the data to encode in the QR code: ")
    file_name = input("Enter the desired file name for the QR code image (e.g., output.png): ")

    generate_qrcode(data_to_encode, file_name)
    print(f"QR code generated and saved as {file_name}")