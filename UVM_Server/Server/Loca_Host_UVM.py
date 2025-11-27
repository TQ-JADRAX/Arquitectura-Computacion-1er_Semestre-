from flask import Flask, send_from_directory
from pyngrok import ngrok

app = Flask(__name__)


# RUTA DEL HTML
@app.route("/UVM_Server/Server/UVM.html")
def home():
    return send_from_directory(".", "UVM.html")

if __name__ == "__main__":
    public_url = ngrok.connect(8080)
    print("URL pública:", public_url)

    app.run(port=8080)
