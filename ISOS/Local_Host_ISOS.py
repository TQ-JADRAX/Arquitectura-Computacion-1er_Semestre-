from pyngrok import ngrok

# Conecta al puerto 8000
tunnel = ngrok.connect(8080)
print("Túnel abierto en:", tunnel.public_url)

# Mantiene el túnel activo
input("Presiona ENTER para cerrar el túnel...\n")

ngrok.disconnect(tunnel.public_url)