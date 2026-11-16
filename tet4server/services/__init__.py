"""One module per service the client talks to, turning messages into actions on the
domain and the domain's state into replies.

tpack.py      TPack login (plain frames)
directory.py  the CDS channel directory (plain frames)
accounts.py   registration and login tickets (JSON lines, for the launcher)
channel.py    the channel socket: lobby, rooms, invitations, profiles, shop
game.py       the game socket: a room and its games
views.py      what clients are shown: member rows, profiles, room info, the shop
"""
