from flask import Flask

app = Flask(__name__)

@app.route("/welcome")
def welcome():
    return "<h1>Welcome to ABC Corporation</h1>"

@app.route("/")
def details():
    return """Company Name: ABC Corporation<br>
Location: India<br>
Contact Detail: 999-999-9999"""

if __name__ == "__main__":
    app.run()