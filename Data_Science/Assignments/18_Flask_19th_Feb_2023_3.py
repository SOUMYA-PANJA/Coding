from flask import Flask, redirect, url_for

app = Flask(__name__)

@app.route('/')
def hello():
    return "<h1>Hello World!!</h1>"

@app.route('/admin')
def admin():
    return "<h1>Admin</h1>"

@app.route('/student')
def student():
    return "<h1>Student</h1>"

@app.route('/user/<user_type>')
def user(user_type):
    if(user_type == "admin"):
        return redirect(url_for('admin'))
    elif(user_type == "student"):
        return redirect(url_for('student'))
    else:
        return "<h3>Specify type!!!</h3>"

if __name__ == "__main__":
    app.run()