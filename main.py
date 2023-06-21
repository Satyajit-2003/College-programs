import requests

url = "https://livetrafficfeed.com/static/online/update.js"

querystring = {"ranid":"pEPun68Z7SlaEIZJBEV4Tsk8LzqUkCF6EI6O0L98mC8jyldkxn","l":"https^%^3A^%^2F^%^2Fwww.nextbomb.in^%^2FWhatsappBomber^%^2Fbomb.php","root":"0"}


count = 0

payload = ""
headers = {
    "authority": "www.nextbomb.in",
    "accept": "*/*",
    "accept-language": "en-US,en;q=0.9",
    "dnt": "1",
    "referer": "https://www.nextbomb.in/WhatsappBomber/bomb.php",
    "sec-ch-ua": "^\^Google",
    "sec-ch-ua-mobile": "?0",
    "sec-ch-ua-platform": "^\^Windows^^",
    "sec-fetch-dest": "empty",
    "sec-fetch-mode": "cors",
    "sec-fetch-site": "same-origin",
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36",
    "content-length": "0",
    "cookie": "_gid=GA1.2.677668838.1683358455; PHPSESSID=66fb5823315f7e23b2b598886a66d25b; LTFSESSID=860lae111outvqvdeju5fu2d50; _ga=GA1.1.1178415011.1683358454; _ga_F1D2X2LPQE=GS1.1.1683358454.1.1.1683360081.0.0.0",
    "origin": "https://www.nextbomb.in",
    "x-requested-with": "XMLHttpRequest"
}


while 1:
    try: 
        response = requests.request("POST", url, data=payload, headers=headers, params=querystring)
        print(response.text)
        count += 1
    except KeyboardInterrupt:
        print(count)
        break