from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

@app.route("/")
def homePage():
    return render_template("index.html")

@app.route("/math", methods = ['POST'])
def mathematics():
    if(request.method == "POST"):
        ops = request.form['operation']
        num1 = int(request.form['num1'])
        num2 = int(request.form['num2'])

        if(ops == "add"):
            res = num1 + num2
            result = f"{num1} + {num2} = {res}"
        elif(ops == "subtract"):
            res = num1 - num2
            result = f"{num1} - {num2} = {res}"
        elif(ops == "multiply"):
            res = num1 * num2
            result = f"{num1} * {num2} = {res}"
        elif(ops == "divisiion"):
            res = num1 / num2
            result = f"{num1} / {num2} = {res}"
        
        return render_template("results.html", result = result)

@app.route("/postman_data", methods = ['POST'])
def mathOperation():
    if(request.method == "POST"):
        ops = request.json['operation']
        num1 = int(request.json['num1'])
        num2 = int(request.json['num2'])

        if(ops == "add"):
            res = num1 + num2
            result = f"{num1} + {num2} = {res}"
        elif(ops == "subtract"):
            res = num1 - num2
            result = f"{num1} - {num2} = {res}"
        elif(ops == "multiply"):
            res = num1 * num2
            result = f"{num1} * {num2} = {res}"
        elif(ops == "divisiion"):
            res = num1 / num2
            result = f"{num1} / {num2} = {res}"
        
        return jsonify(result)

if __name__ == "__main__":
    app.run()