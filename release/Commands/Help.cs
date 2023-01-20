using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VlaicuOS.Commands
{
    public class Help : Command
    {

        public Help (String name) : base (name) { }

        public override String execute (String[] args)
        {
            return "Welcome to VlaicuOS  it is beta only help command OMG";
        }

    }
}
