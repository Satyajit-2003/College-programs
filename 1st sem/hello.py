import requests

url = "https://cricketliveapi.p.rapidapi.comhttp//admin.vgamaa.com/match.aspx"

querystring = {"matchid":"{37701}"}

headers = {
    'x-rapidapi-host': "cricketliveapi.p.rapidapi.com",
    'x-rapidapi-key': "2e8ace00a9msh06c4d0e36dc8434p155e96jsna35896838468"
    }

response = requests.request("GET", url, headers=headers, params=querystring)

print('Hello world')