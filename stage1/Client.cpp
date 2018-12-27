/*This program Connects you to kik xmpp server with
registered jid/user and allows you to send whatever
message from the account to a particular user. this
is stage 1 of the xmpp client*/
#include <stdio.h>
#include <stdlib.h>
#include <gloox/client.h>
#include <gloxx/messageHandler.h>
using namespace gloox;
/*Feel free to remove the is typing + sleep function i only added those just for a little spooky program effect*/
cout << "is typing..."
sleep(4000);
cout << "Welcome to The unofficial C++ Bot startup, To start please enter your bot login information(We are only accepting Accounts that you have already made for your Bot and not ones that you want to register";
sleep(2000);
username = cout << "Enter Username: ";
password = cout << "Password: ";
cout << "Logging In..";
class Kikclient : public MessageHandler {
public:
//Connecting & Listening to Kik server.
	Kikclient :: setServer {
	JID jid("talk1110an.kik.com");
 client = new Client(jid, 5223);
 connListener = new connListener();
 //Handles message
 client->registerMessageHandler(this);
 client->registerConnectionListener(connListener);
 client->connect();
 /*Any unspecified auth-required responses gets outputted with an "issue: " if the user and pass does'nt get passed.*/
  Kikclient :: Authentication {
Authentication->username;
Authentication->password;
Authentication(MessageHandler, this, "Issue: " Authentication);
  }
  //Collects Xmpp Roster(Contacts).
  cout << "Getting roster."
client->rosterManager()->registerRosterListener(this);
  client->disco()->setVersion("Kik", GLOOX_VERSION;);
  client->disco()->setIdentity(username, jid);
  client->logInstance.registerLogHandler(LogAreaAll, this);
  //Message sending
 virtual void handleMessage( const Message& stanza,MessageSession*user session = 0);
  Message msg(stanza.from("Testing");
  Message msg(user.jid("example@example.com", stanza);
/*Feel free to change that message to whatever*/
client->send(msg);
cout << "Message sent";
private:
KikClient* client;

};
int main(int argc, char* argv[])
{
KikClient client;
}
