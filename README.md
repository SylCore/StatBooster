# SylCore Stat Booster

## About
This is a module for [SylCore](https://github.com/SylCore/SylCore-WoTLK).
The module will randomly enchant items with stats that compliment the item.

## Features
The features I have planned for this module that differ from the original are:
- **Stat Analysis** - Items are analyzed and enchanted based on stats already on the item. (If there are no stats then it is analyzed based off class & subclass types.)
- **Expandable Enchant Pool** - You can add enchant ids to your database table to expand your pool.
- **Item Level Based** - You can assign item level ranges to enchants in the database table for each entry preventing high level enchants on low level items.

## Install
1. **[Clone](https://git-scm.com/docs/git-clone)** this repository into your `./sylcore-wotlk/modules` folder. (Make sure to clone it into a subdirectory called StatBooster)
2. **Place** `statbooster.conf.dist` into your server `./configs/modules` directory.

Visit the [Wiki](https://github.com/AnchyDev/StatBooster/wiki/Enchant%20Template) if you require help with setting up enchants in the database.

## Example Items
![Item01](https://i.imgur.com/MYgpZKK.png)
![Item02](https://i.imgur.com/qCgx7XS.png)
![Item03](https://i.imgur.com/nnh3YA1.png)


## License

This module uses the MIT license.

## Credits
- [AnchyDev](https://github.com/AnchyDev) creator of this module.
