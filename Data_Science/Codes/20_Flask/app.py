from flask import Flask
from flask import request

app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World!</p>"

@app.route("/test")
def hello_world2():
    data1 = request.args.get('x') # link/test?x=5
    # data2 = request.args.get('q')
    return "<p>Hello, World {}!</p>".format(data1)

if __name__ == "__main__":
    app.run()