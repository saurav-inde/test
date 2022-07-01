from ks_api_client import ks_api
import time

#####################################################################################
# Details for the session login and initiation
token = "ce977d78-859b-3eaa-a2ac-614bd1d4be99"
consumerid = "nNH5s536Z_ZpAkwwxgWIyoE17fwa"
userid = "SAU470"
appid = "97SRcwaRlZdDFV9UbL9fWMTJV6Ia"
asc_code = (input("Provide the access code for the login: "))


######################################################################################
# Code to login to the broker server using the api
client: None

def generate_session():
    global client 
    client = ks_api.KSTradeApi(access_token=token, userid=userid,
                               consumer_key=consumerid, ip="127.0.0.1", app_id=appid)
    client.login(password="@Change200")
    client.session_2fa(access_code=asc_code)
   


# generate_session()
# quote = client.quote(instrument_token=1900)
# print(quote)