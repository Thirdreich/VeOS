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
            return "file (crd - create directory, rrd - remove directory, writestr - write text in file, create - create a file delete - delete a file readstr - read text file), gui, fetch";
        }

    }
}
